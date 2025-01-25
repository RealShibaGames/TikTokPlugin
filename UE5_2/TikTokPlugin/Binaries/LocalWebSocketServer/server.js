const WebSocket = require('ws'); // Import the WebSocket library

// Create a WebSocket server listening on port 12345
const server = new WebSocket.Server({ port: 12345 });

// Variable to track the number of active connections
let connectionCount = 0;

// Event listener for new client connections
server.on('connection', (socket) => {
    // Increment connection count when a new client connects
    connectionCount++;

    console.log(`New client connected. Total connections: ${connectionCount}`);

    // Send a welcome message along with the connection count
    socket.send(`Welcome to the WebSocket server. Active connections: ${connectionCount}`);

    // Handle incoming messages from clients
    socket.on('message', (message) => {
        console.log(`Received message: ${message}`);

        // Optionally, broadcast the message to all connected clients
        server.clients.forEach((client) => {
            if (client.readyState === WebSocket.OPEN) {
                client.send(`${message}`);
            }
        });
    });

    // Handle client disconnection
    socket.on('close', () => {
        connectionCount--;
        console.log(`Client disconnected. Total connections: ${connectionCount}`);
    });

    // Handle errors
    socket.on('error', (error) => {
        console.error(`WebSocket error: ${error}`);
    });
});

console.log('WebSocket server is running on ws://localhost:12345');
