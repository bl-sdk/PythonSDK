#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UXnaForceFeedbackManager(py::object m)
{
    py::class_< UXnaForceFeedbackManager,  UForceFeedbackManager   >(m, "UXnaForceFeedbackManager")
        .def("StaticClass", &UXnaForceFeedbackManager::StaticClass, py::return_value_policy::reference)
          ;
}