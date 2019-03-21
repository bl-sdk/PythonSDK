#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendList()
{
    class_< UWillowAnimNodeBlendList, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNodeBlendList", no_init)
        .def_readwrite("ChildBlendInTime", &UWillowAnimNodeBlendList::ChildBlendInTime)
        .def("StaticClass", &UWillowAnimNodeBlendList::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}