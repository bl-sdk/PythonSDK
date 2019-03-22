#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderExtras(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderExtras,  UWillowScrollingListDataProviderBase   >(m, "UWillowScrollingListDataProviderExtras")
        .def("Populate", &UWillowScrollingListDataProviderExtras::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderExtras::HandleClick)
          ;
}