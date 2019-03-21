#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovie_StateParent()
{
    class_< UGFxMovie_StateParent, bases< UGearboxGFxMovie >  , boost::noncopyable>("UGFxMovie_StateParent", no_init)
        .def_readwrite("StateClass", &UGFxMovie_StateParent::StateClass)
        .def("StaticClass", &UGFxMovie_StateParent::StaticClass, return_value_policy< reference_existing_object >())
        .def("MovieState_OnChanged", &UGFxMovie_StateParent::MovieState_OnChanged)
        .def("eventStart", &UGFxMovie_StateParent::eventStart)
        .staticmethod("StaticClass")
  ;
}