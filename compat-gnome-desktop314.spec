%define gtk3_version                      3.3.6
%define glib2_version                     2.38.0
%define gtk_doc_version                   1.9
%define gsettings_desktop_schemas_version 3.5.91
%define po_package                        gnome-desktop-3.0

Summary: Compat package with gnome-desktop 3.14 libraries
Name: compat-gnome-desktop314
Version: 3.14.2
Release: 1%{?dist}
URL: http://www.gnome.org
Source0: http://download.gnome.org/sources/gnome-desktop/3.14/gnome-desktop-%{version}.tar.xz
Patch0: 0001-default-input-sources-Switch-ja_JP-default-to-ibus-k.patch

License: GPLv2+ and LGPLv2+

BuildRequires: gnome-common
BuildRequires: gtk3-devel >= %{gtk3_version}
BuildRequires: gobject-introspection-devel
BuildRequires: gsettings-desktop-schemas-devel >= %{gsettings_desktop_schemas_version}
BuildRequires: glib2-devel >= %{glib2_version}
BuildRequires: libxkbfile-devel
BuildRequires: xkeyboard-config-devel
BuildRequires: gettext
BuildRequires: gtk-doc >= %{gtk_doc_version}
BuildRequires: automake autoconf libtool intltool
BuildRequires: itstool
BuildRequires: iso-codes-devel

# Explicitly conflict with older gnome-desktop3 packages that ship libraries
# with the same soname as this compat package
Conflicts: gnome-desktop3 < 3.18

%description
Compatibility package with gnome-desktop 3.14 librarires.

%prep
%setup -q -n gnome-desktop-%{version}
%patch0 -p1

%build
%configure --with-pnp-ids-path="/usr/share/hwdata/pnp.ids"
make %{?_smp_mflags}

%install
%make_install

# stuff we don't want
rm -f $RPM_BUILD_ROOT%{_libdir}/*.la
rm -f $RPM_BUILD_ROOT%{_libdir}/*.a

rm -rf $RPM_BUILD_ROOT%{_includedir}
rm -rf $RPM_BUILD_ROOT%{_libdir}/girepository-1.0/
rm -rf $RPM_BUILD_ROOT%{_libdir}/pkgconfig/
rm -rf $RPM_BUILD_ROOT%{_libdir}/*.so
rm -rf $RPM_BUILD_ROOT%{_libexecdir}
rm -rf $RPM_BUILD_ROOT%{_datadir}

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files
%license COPYING COPYING.LIB
%{_libdir}/lib*.so.*

%changelog
* Wed Oct 19 2016 Kalev Lember <klember@redhat.com> - 3.14.2-1
- Initial gnome-desktop3 3.14 compat package
