#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderMapList()
{
    class_< UWillowScrollingListDataProviderMapList, bases< UWillowScrollingListDataProviderBase >  , boost::noncopyable>("UWillowScrollingListDataProviderMapList", no_init)
        .def_readwrite("MapListDef", &UWillowScrollingListDataProviderMapList::MapListDef)
        .def_readwrite("MenuDisplayNameOverride", &UWillowScrollingListDataProviderMapList::MenuDisplayNameOverride)
        .def("StaticClass", &UWillowScrollingListDataProviderMapList::StaticClass, return_value_policy< reference_existing_object >())
        .def("Populate", &UWillowScrollingListDataProviderMapList::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderMapList::HandleClick)
        .def("GetMenuDisplayName", &UWillowScrollingListDataProviderMapList::GetMenuDisplayName)
        .staticmethod("StaticClass")
  ;
}