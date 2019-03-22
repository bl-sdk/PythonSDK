#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderMapList(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderMapList,  UWillowScrollingListDataProviderBase   >(m, "UWillowScrollingListDataProviderMapList")
        .def_readwrite("MapListDef", &UWillowScrollingListDataProviderMapList::MapListDef)
        .def_readwrite("MenuDisplayNameOverride", &UWillowScrollingListDataProviderMapList::MenuDisplayNameOverride)
        .def("Populate", &UWillowScrollingListDataProviderMapList::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderMapList::HandleClick)
        .def("GetMenuDisplayName", &UWillowScrollingListDataProviderMapList::GetMenuDisplayName)
          ;
}