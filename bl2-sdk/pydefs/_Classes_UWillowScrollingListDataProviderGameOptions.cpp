#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderGameOptions(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderGameOptions,  UWillowScrollingListDataProviderOptionsBase   >(m, "UWillowScrollingListDataProviderGameOptions")
        .def("Populate", &UWillowScrollingListDataProviderGameOptions::Populate)
          ;
}