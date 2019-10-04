; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "SO Tag"
#define MyAppVersion "1.2"
#define MyAppURL "https://drive.google.com/open?id=135XyZt7_L69N4_gjO-28HVxHhfj7fO1k"
#define MyAppExeName "SO_Tag.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application. Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{1AD95E9E-85B5-405B-82E5-A41E3A397C0F}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={autopf}\{#MyAppName}
DisableProgramGroupPage=yes
InfoAfterFile=C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\README.rtf
; Remove the following line to run in administrative install mode (install for all users.)
PrivilegesRequired=lowest
OutputBaseFilename=so_tag_setup
SetupIconFile=C:\Users\Daniel\Bitbucket\cppworkspace\SO_Tag[test]\icon.ico
Compression=lzma
SolidCompression=yes
WizardStyle=modern

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\SO_Tag.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\author.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\config.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\config_file.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\csv_file.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\D3Dcompiler_47.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\GNU-GPL_v3.txt"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\libEGL.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\libGLESV2.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\main.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\mainwindow.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\menu.png"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\menu_icon.ico"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\moc_author.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\moc_author.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\moc_config_file.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\moc_config_file.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\moc_mainwindow.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\moc_mainwindow.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\moc_predefs.h"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\opengl32sw.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\printer.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\qrc_icons.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\qrc_icons.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\Qt5Core.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\Qt5Gui.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\Qt5Svg.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\Qt5Widgets.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\README.pdf"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\SO_Tag.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\SO_Tag_resource.res"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\special_order.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\store_order.obj"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\tag.pdf"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\iconengines\*"; DestDir: "{app}\iconengines"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\imageformats\*"; DestDir: "{app}\imageformats"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\platforms\*"; DestDir: "{app}\platforms"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\styles\*"; DestDir: "{app}\styles"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\Daniel\Bitbucket\cppworkspace\build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release\release\translations\*"; DestDir: "{app}\translations"; Flags: ignoreversion recursesubdirs createallsubdirs
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{autoprograms}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{autodesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

