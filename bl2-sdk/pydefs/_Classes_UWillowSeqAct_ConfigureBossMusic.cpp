#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ConfigureBossMusic()
{
    py::class_< UWillowSeqAct_ConfigureBossMusic,  USequenceAction   >("UWillowSeqAct_ConfigureBossMusic")
        .def_readwrite("BossAkState", &UWillowSeqAct_ConfigureBossMusic::BossAkState)
        .def("StaticClass", &UWillowSeqAct_ConfigureBossMusic::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}