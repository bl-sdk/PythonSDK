#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxManager()
{
    class_< UGFxManager, bases< UObject >  , boost::noncopyable>("UGFxManager", no_init)
        .def_readwrite("MyDefinition", &UGFxManager::MyDefinition)
        .def("StaticClass", &UGFxManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetFocusMovie", &UGFxManager::GetFocusMovie, return_value_policy< reference_existing_object >())
        .def("eventLookupSound", &UGFxManager::eventLookupSound, return_value_policy< reference_existing_object >())
        .def("eventShowDialog", &UGFxManager::eventShowDialog, return_value_policy< reference_existing_object >())
        .def("eventInit", &UGFxManager::eventInit)
        .staticmethod("StaticClass")
  ;
}