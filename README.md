<div align="center" >
<a target="blank" >
<img src="resources/images/ShibaLogo.png" width="15%" >
</a>
</div>
<div align="center" >
<h1>TikTokPlugin</h1>

 *Seamlessly connect Unreal Engine to any TikTok Live* 

<div align="center" >


<a href="https://discord.gg/mQbRtx62fV" target="blank" >
<img src="https://img.shields.io/badge/Discord-%235865F2.svg?style=for-the-badge&logo=discord&logoColor=white" >
</a>

<a target="blank" >
<img src="https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white" >
</a>

</div>
</div>


# Introduction
**TikTokPlugin** is a plugin inspired by [TikTokLive](https://github.com/isaackogan/TikTokLive) and powered by the [TikTokLiveJava](https://github.com/jwdeveloper/TikTokLiveJava) library. The plugin enables seamless integration of TikTok livestream interactions into Unreal Engine with the click of a button. This is achieved by encapsulating a lightweight Java runtime and a Node.js WebSocket server within the C++ plugin, allowing smooth communication between the Java application and Unreal Engine's C++ classes.

With **TikTokPlugin**, you can connect to any TikTok livestream and use viewer interactions—such as comments, likes, and gifts—to trigger real-time in-game events. This plugin is designed to elevate live-streamed gaming experiences by leveraging TikTok's vibrant interactivity.





# Features
- **Event-driven architecture**: Listens for events like comments, likes, and gifts.

- **Custom game logic**: Use data to trigger animations, spawn objects, and modify game states. The possibilities are endless!

- **Self-contained setup**: Plugin includes a lightweight Java runtime and NodeJS websocket server bundled with the plugin, handling network connection with zero setup.

---

## Getting Started

### Installation

#### Unreal Engine Integration
1. Clone or download the **TikTokPlugin** repository.
2. Copy the plugin folder into your Unreal Engine project's `Plugins` directory.
3. Enable the plugin in the Unreal Engine editor.

#### Bundled Java Runtime
- Ensure the `JavaIntegration` directory includes the lightweight JRE, Java JAR, and JNI shared libraries.

### Example Usage

#### Unreal Engine Blueprint Setup
Call the `TestPluginFunction` from any Blueprint to verify the plugin's functionality.

#### Java Application
Launch the Java application (`tiktok_to_unreal-1.0-SNAPSHOT.jar`) alongside your game. The Java app handles TikTok livestream scraping and communicates with the plugin via JNI.

---

## Events

### Core Events
**Gift Events**  
Triggered when a user sends a gift:
- `Rose`
- `Corgi`
- `GG`

