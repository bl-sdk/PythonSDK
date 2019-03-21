#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderLobby()
{
    py::class_< UWillowScrollingListDataProviderLobby,  UWillowScrollingListDataProviderBase   >("UWillowScrollingListDataProviderLobby")
        .def("StaticClass", &UWillowScrollingListDataProviderLobby::StaticClass, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderLobby::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderLobby::HandleClick)
        .staticmethod("StaticClass")
  ;
}