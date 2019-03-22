#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MissionSmokeTest(py::module &m)
{
    py::class_< UWillowSeqAct_MissionSmokeTest,  USeqAct_Latent   >(m, "UWillowSeqAct_MissionSmokeTest")
        .def_readwrite("SaveGameList", &UWillowSeqAct_MissionSmokeTest::SaveGameList)
        .def_readwrite("CurrentSavegame", &UWillowSeqAct_MissionSmokeTest::CurrentSavegame)
        .def_readwrite("TestStatus", &UWillowSeqAct_MissionSmokeTest::TestStatus)
        .def_readwrite("LatentFloat", &UWillowSeqAct_MissionSmokeTest::LatentFloat)
        .def("StaticClass", &UWillowSeqAct_MissionSmokeTest::StaticClass, py::return_value_policy::reference)
          ;
}