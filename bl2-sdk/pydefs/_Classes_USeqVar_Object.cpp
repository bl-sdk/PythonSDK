#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Object()
{
    class_< USeqVar_Object, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_Object", no_init)
        .def_readwrite("ObjValue", &USeqVar_Object::ObjValue)
        .def_readwrite("ActorLocation", &USeqVar_Object::ActorLocation)
        .def("StaticClass", &USeqVar_Object::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetObjectValue", &USeqVar_Object::SetObjectValue)
        .def("GetObjectValue", &USeqVar_Object::GetObjectValue, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}