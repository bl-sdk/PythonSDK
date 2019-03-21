#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AssignController()
{
    py::class_< USeqAct_AssignController,  USequenceAction   >("USeqAct_AssignController")
        .def_readwrite("ControllerClass", &USeqAct_AssignController::ControllerClass)
        .def("StaticClass", &USeqAct_AssignController::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}