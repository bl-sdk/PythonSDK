#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFlashMovie(py::module &m)
{
    py::class_< UFlashMovie,  USwfMovie   >(m, "UFlashMovie")
		.def_static("StaticClass", &UFlashMovie::StaticClass, py::return_value_policy::reference)
          ;
}