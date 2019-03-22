#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowAutoTestManager(py::module &m)
{
    py::class_< AWillowAutoTestManager,  AAutoTestManager   >(m, "AWillowAutoTestManager")
        .def_readwrite("WillowSentinelPC", &AWillowAutoTestManager::WillowSentinelPC)
        .def_readwrite("TotalLevelLoads", &AWillowAutoTestManager::TotalLevelLoads)
        .def("StaticClass", &AWillowAutoTestManager::StaticClass, py::return_value_policy::reference)
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
          ;
}