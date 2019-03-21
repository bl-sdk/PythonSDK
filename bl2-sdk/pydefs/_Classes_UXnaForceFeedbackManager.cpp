#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UXnaForceFeedbackManager()
{
    py::class_< UXnaForceFeedbackManager,  UForceFeedbackManager   >("UXnaForceFeedbackManager")
        .def("StaticClass", &UXnaForceFeedbackManager::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}