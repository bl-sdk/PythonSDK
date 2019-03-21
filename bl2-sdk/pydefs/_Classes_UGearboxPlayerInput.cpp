#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxPlayerInput()
{
    class_< UGearboxPlayerInput, bases< UPlayerInput >  , boost::noncopyable>("UGearboxPlayerInput", no_init)
        .def("StaticClass", &UGearboxPlayerInput::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPlayerInput", &UGearboxPlayerInput::eventPlayerInput)
        .staticmethod("StaticClass")
  ;
}