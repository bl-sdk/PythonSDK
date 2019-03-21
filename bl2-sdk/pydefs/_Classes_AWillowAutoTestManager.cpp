#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowAutoTestManager()
{
    class_< AWillowAutoTestManager, bases< AAutoTestManager >  , boost::noncopyable>("AWillowAutoTestManager", no_init)
        .def_readwrite("WillowSentinelPC", &AWillowAutoTestManager::WillowSentinelPC)
        .def_readwrite("TotalLevelLoads", &AWillowAutoTestManager::TotalLevelLoads)
        .def("StaticClass", &AWillowAutoTestManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("Tick", &AWillowAutoTestManager::Tick)
        .def("CloseAutomatedMapTestTimer", &AWillowAutoTestManager::CloseAutomatedMapTestTimer)
        .def("AutomatedTravelToNextMap", &AWillowAutoTestManager::AutomatedTravelToNextMap)
        .def("GetNextAutomatedTestingMap", &AWillowAutoTestManager::GetNextAutomatedTestingMap)
        .def("MenuTimerWorker", &AWillowAutoTestManager::MenuTimerWorker)
        .def("TestBackMenu", &AWillowAutoTestManager::TestBackMenu)
        .def("TestDucking", &AWillowAutoTestManager::TestDucking)
        .def("TestJumping", &AWillowAutoTestManager::TestJumping)
        .def("TestNextWeapon", &AWillowAutoTestManager::TestNextWeapon)
        .def("TestStopFiring", &AWillowAutoTestManager::TestStopFiring)
        .def("TestStartFiring", &AWillowAutoTestManager::TestStartFiring)
        .def("TestStopWalking", &AWillowAutoTestManager::TestStopWalking)
        .def("TestStartWalking", &AWillowAutoTestManager::TestStartWalking)
        .def("DisableTrainingMessages", &AWillowAutoTestManager::DisableTrainingMessages)
        .def("ExecuteConsoleCommand", &AWillowAutoTestManager::ExecuteConsoleCommand)
        .def("DoAutomatedSmokeTest", &AWillowAutoTestManager::DoAutomatedSmokeTest)
        .def("DoUIAutoMemTest", &AWillowAutoTestManager::DoUIAutoMemTest)
        .def("eventPostBeginPlay", &AWillowAutoTestManager::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}