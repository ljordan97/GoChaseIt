
"use strict";

let InitRectTrajectory = require('./InitRectTrajectory.js')
let AddWaypoint = require('./AddWaypoint.js')
let GetMBSMControllerParams = require('./GetMBSMControllerParams.js')
let StartTrajectory = require('./StartTrajectory.js')
let GetSMControllerParams = require('./GetSMControllerParams.js')
let SetSMControllerParams = require('./SetSMControllerParams.js')
let GoToIncremental = require('./GoToIncremental.js')
let SwitchToManual = require('./SwitchToManual.js')
let InitWaypointsFromFile = require('./InitWaypointsFromFile.js')
let ResetController = require('./ResetController.js')
let ClearWaypoints = require('./ClearWaypoints.js')
let IsRunningTrajectory = require('./IsRunningTrajectory.js')
let Hold = require('./Hold.js')
let SetPIDParams = require('./SetPIDParams.js')
let SetMBSMControllerParams = require('./SetMBSMControllerParams.js')
let GoTo = require('./GoTo.js')
let GetWaypoints = require('./GetWaypoints.js')
let InitCircularTrajectory = require('./InitCircularTrajectory.js')
let InitWaypointSet = require('./InitWaypointSet.js')
let GetPIDParams = require('./GetPIDParams.js')
let SwitchToAutomatic = require('./SwitchToAutomatic.js')
let InitHelicalTrajectory = require('./InitHelicalTrajectory.js')

module.exports = {
  InitRectTrajectory: InitRectTrajectory,
  AddWaypoint: AddWaypoint,
  GetMBSMControllerParams: GetMBSMControllerParams,
  StartTrajectory: StartTrajectory,
  GetSMControllerParams: GetSMControllerParams,
  SetSMControllerParams: SetSMControllerParams,
  GoToIncremental: GoToIncremental,
  SwitchToManual: SwitchToManual,
  InitWaypointsFromFile: InitWaypointsFromFile,
  ResetController: ResetController,
  ClearWaypoints: ClearWaypoints,
  IsRunningTrajectory: IsRunningTrajectory,
  Hold: Hold,
  SetPIDParams: SetPIDParams,
  SetMBSMControllerParams: SetMBSMControllerParams,
  GoTo: GoTo,
  GetWaypoints: GetWaypoints,
  InitCircularTrajectory: InitCircularTrajectory,
  InitWaypointSet: InitWaypointSet,
  GetPIDParams: GetPIDParams,
  SwitchToAutomatic: SwitchToAutomatic,
  InitHelicalTrajectory: InitHelicalTrajectory,
};
