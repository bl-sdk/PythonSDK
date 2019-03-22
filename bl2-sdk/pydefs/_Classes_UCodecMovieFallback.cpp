#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCodecMovieFallback(py::module &m)
{
    py::class_< UCodecMovieFallback,  UCodecMovie   >(m, "UCodecMovieFallback")
        .def_readwrite("CurrentTime", &UCodecMovieFallback::CurrentTime)
          ;
}