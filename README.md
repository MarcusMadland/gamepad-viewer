# GamepadViewer for Unreal Engine

A gamepad viewer plugin to display live input from a controller in Unreal Engine. 

![](https://github.com/MarcusMadland/GamepadViewer/blob/main/readme-gif01.gif)

## Functionality
This plugin is ment to be an easy way to debug your controller input and making sure it's registered by the engine. It can also be used to showcase other developers on your team what exactly your input is when you are show casing some gameplay either in videos or by sharing your screen, since it's in engine.

<ins> NO COLOR </ins> - Not registering input. 

<ins> YELLOW </ins>  - Input registered but axis value is not full. 

<ins> GREEN </ins>   - Input registered. 

## Usage
- Drag and drop plugin into the plugins folder of your project.
- In engine go to edit->Plugins then enable the gamepad viewer plugin and restart the editor.
- You will have access to two widget blueprints. One is for the the gamepad viewer only, the other one is a hud example with the gamepad viewer attached. Choose which ever you like and add it to viewport.


