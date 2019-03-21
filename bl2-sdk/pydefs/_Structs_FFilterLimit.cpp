#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFilterLimit()
{
    class_< FFilterLimit >("FFilterLimit", no_init)
        .def_readwrite("Base", &FFilterLimit::Base)
        .def_readwrite("NoiseScale", &FFilterLimit::NoiseScale)
        .def_readwrite("NoiseAmount", &FFilterLimit::NoiseAmount)
  ;
}