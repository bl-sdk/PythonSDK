#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_GoStraightToMainMenu()
{
    py::class_< UWillowSeqCond_GoStraightToMainMenu,  USequenceCondition   >("UWillowSeqCond_GoStraightToMainMenu")
        .def("StaticClass", &UWillowSeqCond_GoStraightToMainMenu::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}