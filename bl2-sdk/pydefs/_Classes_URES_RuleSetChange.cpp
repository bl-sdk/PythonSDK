#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_RuleSetChange()
{
    class_< URES_RuleSetChange, bases< UActionResource >  , boost::noncopyable>("URES_RuleSetChange", no_init)
        .def("StaticClass", &URES_RuleSetChange::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}