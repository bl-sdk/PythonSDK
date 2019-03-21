#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAITransformedName()
{
    class_< FAITransformedName >("FAITransformedName", no_init)
        .def_readwrite("Type", &FAITransformedName::Type)
        .def_readwrite("TransformedName", &FAITransformedName::TransformedName)
        .def_readwrite("TransformedKillStat", &FAITransformedName::TransformedKillStat)
  ;
}