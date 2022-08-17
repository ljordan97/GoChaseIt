
"use strict";

let SetCurrentDirection = require('./SetCurrentDirection.js')
let GetCurrentModel = require('./GetCurrentModel.js')
let GetOriginSphericalCoord = require('./GetOriginSphericalCoord.js')
let SetOriginSphericalCoord = require('./SetOriginSphericalCoord.js')
let SetCurrentVelocity = require('./SetCurrentVelocity.js')
let SetCurrentModel = require('./SetCurrentModel.js')
let TransformToSphericalCoord = require('./TransformToSphericalCoord.js')
let TransformFromSphericalCoord = require('./TransformFromSphericalCoord.js')

module.exports = {
  SetCurrentDirection: SetCurrentDirection,
  GetCurrentModel: GetCurrentModel,
  GetOriginSphericalCoord: GetOriginSphericalCoord,
  SetOriginSphericalCoord: SetOriginSphericalCoord,
  SetCurrentVelocity: SetCurrentVelocity,
  SetCurrentModel: SetCurrentModel,
  TransformToSphericalCoord: TransformToSphericalCoord,
  TransformFromSphericalCoord: TransformFromSphericalCoord,
};
