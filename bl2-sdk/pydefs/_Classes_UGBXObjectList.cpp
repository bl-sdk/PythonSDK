#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGBXObjectList()
{
    class_< UGBXObjectList, bases< UObject >  , boost::noncopyable>("UGBXObjectList", no_init)
        .def_readwrite("ObjectList", &UGBXObjectList::ObjectList)
        .def("StaticClass", &UGBXObjectList::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveObjectsOfClass", &UGBXObjectList::RemoveObjectsOfClass)
        .def("FindNextObjectByClass", &UGBXObjectList::FindNextObjectByClass, return_value_policy< reference_existing_object >())
        .def("FindFirstObjectByClass", &UGBXObjectList::FindFirstObjectByClass, return_value_policy< reference_existing_object >())
        .def("RemoveObject", &UGBXObjectList::RemoveObject)
        .def("AddObject", &UGBXObjectList::AddObject)
        .staticmethod("StaticClass")
  ;
}