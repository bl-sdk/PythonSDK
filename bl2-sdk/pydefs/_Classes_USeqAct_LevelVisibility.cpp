#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_LevelVisibility()
{
    py::class_< USeqAct_LevelVisibility,  USeqAct_Latent   >("USeqAct_LevelVisibility")
        .def_readwrite("Level", &USeqAct_LevelVisibility::Level)
        .def_readwrite("LevelName", &USeqAct_LevelVisibility::LevelName)
        .def("StaticClass", &USeqAct_LevelVisibility::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}