#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_Cringe()
{
    class_< USpecialMove_Cringe, bases< UWillowAnimDefinition >  , boost::noncopyable>("USpecialMove_Cringe", no_init)
        .def_readwrite("CringeAnim", &USpecialMove_Cringe::CringeAnim)
        .def_readwrite("CringeTime", &USpecialMove_Cringe::CringeTime)
        .def("StaticClass", &USpecialMove_Cringe::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayAnim", &USpecialMove_Cringe::PlayAnim)
        .staticmethod("StaticClass")
  ;
}