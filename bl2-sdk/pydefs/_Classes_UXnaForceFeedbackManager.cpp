#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UXnaForceFeedbackManager(py::module &m)
{
    py::class_< UXnaForceFeedbackManager,  UForceFeedbackManager   >(m, "UXnaForceFeedbackManager")
          ;
}