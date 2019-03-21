#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_Cloak()
{
    class_< USpecialMove_Cloak, bases< USpecialMove_Motion >  , boost::noncopyable>("USpecialMove_Cloak", no_init)
        .def("StaticClass", &USpecialMove_Cloak::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventClientFinished", &USpecialMove_Cloak::eventClientFinished)
        .def("eventClientStarted", &USpecialMove_Cloak::eventClientStarted)
        .staticmethod("StaticClass")
  ;
}