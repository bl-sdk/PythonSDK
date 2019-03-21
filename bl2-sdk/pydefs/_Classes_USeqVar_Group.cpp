#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Group()
{
    class_< USeqVar_Group, bases< USeqVar_Object >  , boost::noncopyable>("USeqVar_Group", no_init)
        .def_readwrite("GroupName", &USeqVar_Group::GroupName)
        .def_readwrite("Actors", &USeqVar_Group::Actors)
        .def("StaticClass", &USeqVar_Group::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}