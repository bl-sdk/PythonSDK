#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_GoStraightToMainMenu(py::object m)
{
    py::class_< UWillowSeqCond_GoStraightToMainMenu,  USequenceCondition   >(m, "UWillowSeqCond_GoStraightToMainMenu")
        .def("StaticClass", &UWillowSeqCond_GoStraightToMainMenu::StaticClass, py::return_value_policy::reference)
          ;
}