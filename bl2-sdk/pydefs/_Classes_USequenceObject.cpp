#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USequenceObject()
{
    class_< USequenceObject, bases< UObject >  , boost::noncopyable>("USequenceObject", no_init)
        .def_readwrite("ObjInstanceVersion", &USequenceObject::ObjInstanceVersion)
        .def_readwrite("ParentSequence", &USequenceObject::ParentSequence)
        .def("StaticClass", &USequenceObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USequenceObject::eventGetObjClassVersion)
        .def("eventIsPastingIntoLevelSequenceAllowed", &USequenceObject::eventIsPastingIntoLevelSequenceAllowed)
        .def("eventIsValidLevelSequenceObject", &USequenceObject::eventIsValidLevelSequenceObject)
        .def("GetWorldInfo", &USequenceObject::GetWorldInfo, return_value_policy< reference_existing_object >())
        .def("ScriptLog", &USequenceObject::ScriptLog)
        .staticmethod("StaticClass")
  ;
}