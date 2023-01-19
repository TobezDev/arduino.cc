const arduino = require('arduino.js');
const script = require('./arduino.cpp');

const ctrl_panel = document.getElementsByClassName('html');

ctrl_panel.content = ctrl_panel.val();
