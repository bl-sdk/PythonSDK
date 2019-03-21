#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAITreeData()
{
    py::class_< FAITreeData >("FAITreeData")
        .def_readwrite("AI", &FAITreeData::AI)
        .def_readonly("UnknownData00", &FAITreeData::UnknownData00)
        .def_readwrite("Type", &FAITreeData::Type)
        .def_readwrite("Children", &FAITreeData::Children)
        .def_readwrite("Resource", &FAITreeData::Resource)
        .def_readwrite("CanRunIf", &FAITreeData::CanRunIf)
        .def_readwrite("TimedStart", &FAITreeData::TimedStart)
        .def_readwrite("TimedReset", &FAITreeData::TimedReset)
        .def_readwrite("TimedFail", &FAITreeData::TimedFail)
        .def_readwrite("ActiveChild", &FAITreeData::ActiveChild)
        .def_readwrite("NextActiveChild", &FAITreeData::NextActiveChild)
        .def_readwrite("LastFailTime", &FAITreeData::LastFailTime)
        .def_readwrite("NextTimedRun", &FAITreeData::NextTimedRun)
        .def_readwrite("NextTimedFail", &FAITreeData::NextTimedFail)
        .def_readwrite("NextTimedResource", &FAITreeData::NextTimedResource)
        .def_readwrite("Action", &FAITreeData::Action)
        .def_readwrite("LoopCount", &FAITreeData::LoopCount)
        .def_readwrite("LastRandomChild", &FAITreeData::LastRandomChild)
        .def_readwrite("Weights", &FAITreeData::Weights)
        .def_readwrite("LoopCountMax", &FAITreeData::LoopCountMax)
        .def_readwrite("Conditions", &FAITreeData::Conditions)
        .def_readwrite("NextSequentialChild", &FAITreeData::NextSequentialChild)
        .def_readwrite("PosX", &FAITreeData::PosX)
        .def_readwrite("PosY", &FAITreeData::PosY)
        .def_readwrite("NodeName", &FAITreeData::NodeName)
        .def_readwrite("ActionFailName", &FAITreeData::ActionFailName)
        .def_readwrite("FailReason", &FAITreeData::FailReason)
  ;
}