#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UChallengesPanelDefinition()
{
    class_< UChallengesPanelDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UChallengesPanelDefinition", no_init)
        .def("StaticClass", &UChallengesPanelDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}