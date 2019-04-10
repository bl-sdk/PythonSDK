#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_XAudio2_classes(py::module &m)
{
	py::class_< UXAudio2Device, UAudioDevice >(m, "UXAudio2Device")
		;

}