#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGCReference()
{
    class_< FGCReference >("FGCReference", no_init)
        .def_readwrite("m_object", &FGCReference::m_object)
        .def_readwrite("m_count", &FGCReference::m_count)
        .def_readwrite("m_statid", &FGCReference::m_statid)
  ;
}