#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFlagDefinitionInitialization()
{
    class_< FFlagDefinitionInitialization >("FFlagDefinitionInitialization", no_init)
        .def_readwrite("FlagToSet", &FFlagDefinitionInitialization::FlagToSet)
        .def_readwrite("ChanceTrue", &FFlagDefinitionInitialization::ChanceTrue)
        .def_readwrite("ProbabilityTrue", &FFlagDefinitionInitialization::ProbabilityTrue)
        .def_readwrite("Duration", &FFlagDefinitionInitialization::Duration)
  ;
}