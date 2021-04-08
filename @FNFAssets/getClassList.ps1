[Array] $Out = @()

ForEach ($file in (Get-ChildItem -Path '.\Addons' -File -Filter '*.hpp')) {
	$Lines = (Get-Content $file.FullName | Select-String -Pattern '^class FNF' | Select-Object -ExpandProperty Line)
	$Out += $Lines | Where-Object {$_ -notmatch ':'}
}

$Out = $Out -replace 'class ',''
$Out > 'classList.txt'