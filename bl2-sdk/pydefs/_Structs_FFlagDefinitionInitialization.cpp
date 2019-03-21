#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFlagDefinitionInitialization()
{
    py::class_< FFlagDefinitionInitialization >("FFlagDefinitionInitialization")
        .def_readwrite("FlagToSet", &FFlagDefinitionInitialization::FlagToSet)
        .def_readwrite("ChanceTrue", &FFlagDefinitionInitialization::ChanceTrue)
        .def_readwrite("ProbabilityTrue", &FFlagDefinitionInitialization::ProbabilityTrue)
        .def_readwrite("Duration", &FFlagDefinitionInitialization::Duration)
  ;
}