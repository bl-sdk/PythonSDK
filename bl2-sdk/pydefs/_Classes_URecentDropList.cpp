#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URecentDropList()
{
    class_< URecentDropList, bases< UObject >  , boost::noncopyable>("URecentDropList", no_init)
        .def_readonly("RecentDrops", &URecentDropList::RecentDrops)
        .def_readwrite("NextIndex", &URecentDropList::NextIndex)
        .def("StaticClass", &URecentDropList::StaticClass, return_value_policy< reference_existing_object >())
        .def("Contains", &URecentDropList::Contains)
        .def("Add", &URecentDropList::Add)
        .staticmethod("StaticClass")
  ;
}