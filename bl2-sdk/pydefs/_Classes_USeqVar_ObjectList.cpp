#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_ObjectList()
{
    class_< USeqVar_ObjectList, bases< USeqVar_Object >  , boost::noncopyable>("USeqVar_ObjectList", no_init)
        .def_readwrite("ObjList", &USeqVar_ObjectList::ObjList)
        .def("StaticClass", &USeqVar_ObjectList::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetObjectValue", &USeqVar_ObjectList::SetObjectValue)
        .def("GetObjectValue", &USeqVar_ObjectList::GetObjectValue, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}