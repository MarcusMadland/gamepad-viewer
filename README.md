# GamepadViewer for Unreal Engine

> A gamepad viewer plugin to display live input from a controller in Unreal Engine. 

![](https://github.com/MarcusMadland/GamepadViewer/blob/main/readme-gif01.gif)

## Functionality
This plugin is ment to be an easy way to debug your controller input and also making sure it's registered by the engine. Use it to show exactly what your input is when performing certain actions either in videos or sharing your screen to your team members.

 **NO COLOR** - Not registering input. 

 **YELLOW**   - Input registered but axis value is not full. 

 **GREEN**    - Input registered. 

## Requirements 
- [UnrealEngine](https://www.unrealengine.com/)

## Getting started
It's just like any other plugin for unreal engine.

- Drag and drop plugin into the plugins folder of your project.
- In the editor, go to `edit`->`Plugins` then enable the **Gamepad Viewer** plugin and restart the editor.
- You will have access to two widget blueprints. One is for the the gamepad viewer only `WB_GamepadViewer.uasset`, the other one is a hud example with the gamepad viewer attached. `WB_HudWithGamepadViewer.uasset` Choose which ever you like and add it to viewport.


