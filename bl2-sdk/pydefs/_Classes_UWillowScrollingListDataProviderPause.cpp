#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderPause(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderPause,  UWillowScrollingListDataProviderBase   >(m, "UWillowScrollingListDataProviderPause")
        .def("Populate", &UWillowScrollingListDataProviderPause::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderPause::HandleClick)
          ;
}