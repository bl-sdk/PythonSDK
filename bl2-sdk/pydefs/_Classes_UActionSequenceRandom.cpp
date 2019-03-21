#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActionSequenceRandom()
{
    class_< UActionSequenceRandom, bases< UActionSequence >  , boost::noncopyable>("UActionSequenceRandom", no_init)
        .def_readwrite("ActionList", &UActionSequenceRandom::ActionList)
        .def("StaticClass", &UActionSequenceRandom::StaticClass, return_value_policy< reference_existing_object >())
        .def("EvaluateActionList", &UActionSequenceRandom::EvaluateActionList)
        .def("OverrideNextSequenceToRun", &UActionSequenceRandom::OverrideNextSequenceToRun)
        .def("GetRandomAction", &UActionSequenceRandom::GetRandomAction, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}