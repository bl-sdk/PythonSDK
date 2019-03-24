#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIListElementProvider(py::module &m)
{
    py::class_< UUIListElementProvider,  UInterface   >(m, "UUIListElementProvider")
		.def_static("StaticClass", &UUIListElementProvider::StaticClass, py::return_value_policy::reference)
          ;
}