#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderMapList()
{
    py::class_< UWillowScrollingListDataProviderMapList,  UWillowScrollingListDataProviderBase   >("UWillowScrollingListDataProviderMapList")
        .def_readwrite("MapListDef", &UWillowScrollingListDataProviderMapList::MapListDef)
        .def_readwrite("MenuDisplayNameOverride", &UWillowScrollingListDataProviderMapList::MenuDisplayNameOverride)
        .def("StaticClass", &UWillowScrollingListDataProviderMapList::StaticClass, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderMapList::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderMapList::HandleClick)
        .def("GetMenuDisplayName", &UWillowScrollingListDataProviderMapList::GetMenuDisplayName)
        .staticmethod("StaticClass")
  ;
}