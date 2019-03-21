#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_LevelStreaming()
{
    py::class_< USeqAct_LevelStreaming,  USeqAct_Latent   >("USeqAct_LevelStreaming")
        .def_readwrite("Level", &USeqAct_LevelStreaming::Level)
        .def_readwrite("LevelName", &USeqAct_LevelStreaming::LevelName)
        .def("StaticClass", &USeqAct_LevelStreaming::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}